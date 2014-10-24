//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeSharing/HSResponse.h>

@class HSControlPrompt, NSDictionary;

@interface HSControlPromptUpdateResponse : HSResponse
{
    unsigned int _nextPromptID;
    HSControlPrompt *_prompt;
    NSDictionary *_promptDictionary;
}

@property(copy, nonatomic) NSDictionary *promptDictionary; // @synthesize promptDictionary=_promptDictionary;
@property(retain, nonatomic) HSControlPrompt *prompt; // @synthesize prompt=_prompt;
@property(nonatomic) unsigned int nextPromptID; // @synthesize nextPromptID=_nextPromptID;
- (void)dealloc;

@end
