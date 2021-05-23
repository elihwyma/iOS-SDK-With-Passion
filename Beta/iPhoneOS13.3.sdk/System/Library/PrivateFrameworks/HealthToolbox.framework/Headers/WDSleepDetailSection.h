/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface WDSleepDetailSection : NSObject

{
    NSString *_headerText;
    NSAttributedString *_attributedDetailText;
}

@property (copy, nonatomic, readonly) NSString *headerText;
@property (copy, nonatomic, readonly) NSAttributedString *attributedDetailText;

+ (id)sectionWithHeaderText:(id)arg1 attributedDetailText:(id)arg2;
+ (id)sectionWithHeaderText:(id)arg1 detailText:(id)arg2;

- (id)init;
- (id)initWithHeaderText:(id)arg1 attributedDetailText:(id)arg2;

@end
