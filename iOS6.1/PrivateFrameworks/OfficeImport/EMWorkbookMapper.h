/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

#import "CMMapperRoot-Protocol.h"

@class CMArchiveManager, EDWorkbook, NSMutableArray, NSString, OIXMLDocument, OIXMLElement;

@interface EMWorkbookMapper : CMMapper <CMMapperRoot>
{
    unsigned int mRealSheetCount;
    int mWidth;
    int mHeight;
    EDWorkbook *edWorkbook;
    NSMutableArray *mWorksheetUrls;
    NSMutableArray *mWorksheetNames;
    NSMutableArray *mWorksheetGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    NSString *mStyleSheetGuid;
    CMArchiveManager *mArchiver;
    NSString *mFileName;
    unsigned int mSheetIndex;
    _Bool mIsFirstMappedSheet;
    _Bool mIsFrameset;
    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    OIXMLDocument *mTabBarDoc;
    NSString *mTabBarURL;
    NSMutableArray *mSheetURLs;
    float mTabPosition;
    unsigned int mNumberOfMappedSheets;
    BOOL mHasPushedHeader;
    BOOL mHasPushedFirstSheet;
    BOOL mLoadingMessageVisible;
}

+ (id)borderWidthCache;
+ (id)borderStyleCache;
+ (id)cssStyleCache;
+ (id)baseDate;
+ (void)setBaseDate1904:(BOOL)arg1;
- (void)finishMappingWithState:(id)arg1;
- (void)mapElement:(id)arg1 atIndex:(unsigned int)arg2 withState:(id)arg3 isLastElement:(BOOL)arg4;
- (id)_copyStringForSheet:(id)arg1 atIndex:(unsigned int)arg2 withState:(id)arg3 andMapper:(id)arg4;
- (void)startMappingWithState:(id)arg1;
- (void)_pushTabForSheet:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_mainPageBack;
- (id)_frontPageByCopyingMainPage;
- (struct CGSize)pageSizeForDevice;
- (BOOL)hasMultipleSheets;
- (id)styleMatrix;
- (id)documentTitle;
- (id)archiver;
- (_Bool)isMultiPage;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)workbook;
- (void)dealloc;
- (id)initWithEDWorkbook:(id)arg1 archiver:(id)arg2;
- (void)mapBodyStyleAt:(id)arg1;
- (id)copySheetMapperWithEdSheet:(id)arg1;

@end

