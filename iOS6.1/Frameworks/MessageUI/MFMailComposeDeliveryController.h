/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFDeliveryDelegate-Protocol.h"

@class MFError, MFOutgoingMessageDelivery, MailMessage, MailboxUid, NSString, OutgoingMessage;

@interface MFMailComposeDeliveryController : NSObject <MFDeliveryDelegate>
{
    id <MailComposeDeliveryControllerDelegate> _delegate;
    MFOutgoingMessageDelivery *_delivery;
    OutgoingMessage *_draftMessage;
    NSString *_sendingAddress;
    MailboxUid *_draftMailbox;
    NSString *_draftMessageID;
    MailMessage *_originalMessage;
    id <NSCoding> _autosaveIdentifier;
    MFError *_error;
    int _composeType;
}

@property(nonatomic) int composeType; // @synthesize composeType=_composeType;
@property(retain, nonatomic) MailboxUid *draftMailbox; // @synthesize draftMailbox=_draftMailbox;
@property(copy, nonatomic) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;
@property(copy, nonatomic) NSString *draftMessageID; // @synthesize draftMessageID=_draftMessageID;
@property(retain, nonatomic) MailMessage *originalMessage; // @synthesize originalMessage=_originalMessage;
@property(nonatomic) id <MailComposeDeliveryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyUserDeliverySucceeded:(id)arg1;
- (void)setPercentDone:(double)arg1;
- (void)_setCodePointTranslationEnabled:(BOOL)arg1;
- (void)_removeDraft;
- (id)error;
- (BOOL)deliverMessage;
- (void)dealloc;
- (id)_initWithDelivery:(id)arg1 draftMessage:(id)arg2;
- (id)initWithDraftMessage:(id)arg1;
- (id)initWithDelivery:(id)arg1;

@end
