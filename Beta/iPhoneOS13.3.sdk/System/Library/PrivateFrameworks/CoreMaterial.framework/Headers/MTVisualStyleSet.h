/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MTVisualStyleSet : NSObject

{
    NSMutableDictionary *_visualStylesToStyleNames;
    NSMutableDictionary *_styleNamesToVisualStylings;
    long long _visualStyleSetVersion;
    NSString *_visualStyleSetName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long visualStyleSetVersion;
@property (copy, nonatomic, readonly) NSString *visualStyleSetName;

- (id)initWithName:(id)arg1 visualStyleSetDescription:(id)arg2 andDescendantDescriptions:(id)arg3;
- (id)visualStylingForStyle:(id)arg1;

@end
