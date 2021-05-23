/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PDHeadersFooters : NSObject

{
    _Bool mHasDateTime;
    _Bool mHasNowDateTime;
    _Bool mHasUserDateTime;
    _Bool mHasSlideNumber;
    _Bool mHasHeader;
    _Bool mHasFooter;
    int mDateTimeFormat;
    NSString *mUserDateTime;
    NSString *mHeader;
    NSString *mFooter;
}

- (id)header;
- (void)setHeader:(id)arg1;
- (id)footer;
- (void)setFooter:(id)arg1;
- (_Bool)hasHeader;
- (void)setHasHeader:(_Bool)arg1;
- (_Bool)hasDateTime;
- (_Bool)hasFooter;
- (void)setHasDateTime:(_Bool)arg1;
- (_Bool)hasNowDateTime;
- (void)setHasNowDateTime:(_Bool)arg1;
- (_Bool)hasUserDateTime;
- (void)setHasUserDateTime:(_Bool)arg1;
- (_Bool)hasSlideNumber;
- (void)setHasSlideNumber:(_Bool)arg1;
- (void)setHasFooter:(_Bool)arg1;
- (id)userDateTime;
- (void)setUserDateTime:(id)arg1;

@end
