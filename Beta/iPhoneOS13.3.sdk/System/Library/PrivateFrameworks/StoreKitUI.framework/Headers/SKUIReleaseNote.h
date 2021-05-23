/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface SKUIReleaseNote : NSObject

{
    NSString *_changeNotes;
    NSDate *_date;
    NSString *_versionString;
}

@property (nonatomic, readonly) NSString *changeNotes;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *versionString;

+ (id)dateFormatter;

- (id)initWithReleaseNoteDictionary:(id)arg1 dateFormatter:(id)arg2;

@end
