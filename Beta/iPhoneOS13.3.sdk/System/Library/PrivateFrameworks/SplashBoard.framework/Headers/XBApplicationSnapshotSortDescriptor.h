/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class NSSortDescriptor, NSString;

@interface XBApplicationSnapshotSortDescriptor : NSObject

{
    unsigned long long _key;
    _Bool _ascending;
    CDUnknownBlockType _comparator;
}

@property (nonatomic) unsigned long long key;
@property (nonatomic) _Bool ascending;
@property (copy, nonatomic) CDUnknownBlockType comparator;
@property (nonatomic, readonly) NSSortDescriptor *NSSortDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sortDescriptorWithKey:(unsigned long long)arg1 ascending:(_Bool)arg2 comparator:(CDUnknownBlockType)arg3;
+ (id)_propertyKeyForSnapshotKey:(unsigned long long)arg1 overriddenForNil:(_Bool *)arg2;

- (id)initWithKey:(unsigned long long)arg1 ascending:(_Bool)arg2 comparator:(CDUnknownBlockType)arg3;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_stringForKey:(unsigned long long)arg1;

@end
