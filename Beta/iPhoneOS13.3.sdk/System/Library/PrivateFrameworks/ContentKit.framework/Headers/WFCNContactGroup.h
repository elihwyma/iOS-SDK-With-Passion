/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContactGroup.h>

@class CNGroup, NSArray;

@interface WFCNContactGroup : WFContactGroup

{
    CNGroup *_group;
    NSArray *_cachedMembers;
}

@property (retain, nonatomic) NSArray *cachedMembers;
@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, readonly) CNGroup *group;

+ (id)allContactGroups;
+ (id)contactGroupWithCNGroup:(id)arg1;

- (id)name;
- (_Bool)containsContact:(id)arg1;
- (id)initWithCNGroup:(id)arg1;

@end
