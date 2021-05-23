/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WFContactGroup : NSObject

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *contacts;
@property (copy, nonatomic, readonly) NSString *wfName;

+ (Class)preferredConcreteSubclass;
+ (id)allContactGroups;
+ (id)contactGroupWithName:(id)arg1;

- (_Bool)containsContact:(id)arg1;

@end
