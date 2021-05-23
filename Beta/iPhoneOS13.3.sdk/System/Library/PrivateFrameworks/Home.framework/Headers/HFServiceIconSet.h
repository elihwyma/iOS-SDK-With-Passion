/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSSet;

@protocol HFIconDescriptor;

@interface HFServiceIconSet : NSObject

{
    NSSet *_allIcons;
    id <HFIconDescriptor> _defaultIcon;
}

@property (nonatomic, readonly) NSSet *allIcons;
@property (nonatomic, readonly) id <HFIconDescriptor> defaultIcon;

+ (id)setWithDefaultIcon:(id)arg1;
+ (id)setWithDefaultIcon:(id)arg1 alternateIcons:(id)arg2;
+ (id)placeholderIconSet;
+ (id)setWithImageIdentifier:(id)arg1;

@end
