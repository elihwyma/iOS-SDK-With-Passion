/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSDDefaultHint : NSObject

{
    struct CGRect mBounds;
    unsigned long long mEdges;
}

@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) unsigned long long edges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (Class)archivedHintClass;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBounds:(struct CGRect)arg1 edges:(unsigned long long)arg2;
- (_Bool)isLastPartitionHorizontally:(_Bool)arg1;
- (_Bool)overlapsWithSelection:(id)arg1;
- (void)offsetByDelta:(int)arg1;
- (id)firstChildHint;
- (id)lastChildHint;
- (id)copyForArchiving;

@end
