/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, WDText;

__attribute__((visibility("hidden")))
@interface WDAnnotationData : NSObject

{
    WDText *mText;
    NSDate *mDate;
    NSString *mOwner;
}

- (id)date;
- (void)setOwner:(id)arg1;
- (id)owner;
- (id)text;
- (void)setDate:(id)arg1;
- (id)initWithText:(id)arg1;

@end
