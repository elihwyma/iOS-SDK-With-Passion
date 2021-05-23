/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSSet, WFContentProperty;

@interface WFContentSortDescriptor : NSObject

{
    _Bool _ascending;
    WFContentProperty *_property;
    CDUnknownBlockType _comparator;
}

@property (nonatomic, readonly) WFContentProperty *property;
@property (copy, nonatomic, readonly) CDUnknownBlockType comparator;
@property (nonatomic, readonly) _Bool ascending;
@property (nonatomic, readonly) NSSet *containedProperties;

+ (id)sortDescriptorWithProperty:(id)arg1 ascending:(_Bool)arg2 comparator:(CDUnknownBlockType)arg3;
+ (id)randomSortDescriptor;

- (id)description;
- (id)initWithProperty:(id)arg1 ascending:(_Bool)arg2 comparator:(CDUnknownBlockType)arg3;

@end
