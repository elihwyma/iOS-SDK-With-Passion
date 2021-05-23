/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface AXBuddyDataPackage : NSObject

{
    _Bool _usesExtendedSlider;
    NSDictionary *_accessibilityOptions;
    NSString *_axOSVersion;
    NSString *_axModel;
    NSString *_axPreferredContentSizeCategoryName;
}

@property (retain, nonatomic) NSDictionary *accessibilityOptions;
@property (retain, nonatomic) NSString *axOSVersion;
@property (retain, nonatomic) NSString *axModel;
@property (retain, nonatomic) NSString *axPreferredContentSizeCategoryName;
@property (nonatomic) _Bool usesExtendedSlider;

+ (_Bool)supportsSecureCoding;
+ (id)dataBlobForBuddy;
+ (void)restoreDataBlobForBuddy:(id)arg1;
+ (id)testData;
+ (id)productVersionForBuddy;
+ (id)deviceClassForBuddy;
+ (void)setTestData:(id)arg1;
+ (id)dataPackageForCurrentSettings;
+ (void)setTestData:(id)arg1 forModel:(id)arg2 hasHomeButton:(_Bool)arg3 largeTextUsesExtendedRange:(_Bool)arg4;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)processDomainDictionary:(id)arg1;
- (void)applySavedSettings;

@end
