/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, UIColor;

@interface DOCTag : NSObject

{
    NSString *_displayName;
    long long _labelIndex;
    long long _type;
    long long _itemCount;
    NSNumber *_sidebarVisible;
    NSNumber *_sidebarPinned;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) long long labelIndex;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long itemCount;
@property (nonatomic, readonly) NSNumber *sidebarVisible;
@property (nonatomic, readonly) NSNumber *sidebarPinned;
@property (nonatomic, readonly) UIColor *displayColor;

+ (_Bool)supportsSecureCoding;
+ (id)tagColorWithLabelIndex:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToTag:(id)arg1;
- (id)initWithDisplayName:(id)arg1 labelIndex:(long long)arg2 type:(long long)arg3;
- (void)mergeWithTag:(id)arg1 options:(long long)arg2;
- (id)initWithICloudTagAttributes:(id)arg1;
- (id)iCloudTagAttributes;
- (id)initWithDisplayName:(id)arg1 labelIndex:(long long)arg2 type:(long long)arg3 itemCount:(long long)arg4 sidebarVisible:(id)arg5 sidebarPinned:(id)arg6;

@end
