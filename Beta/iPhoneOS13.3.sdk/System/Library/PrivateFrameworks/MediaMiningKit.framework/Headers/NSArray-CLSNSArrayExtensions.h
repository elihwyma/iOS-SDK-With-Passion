/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (CLSNSArrayExtensions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *clsCurationItems;

- (id)anyObject;
- (id)map:(CDUnknownBlockType)arg1;
- (id)indentBy:(unsigned long long)arg1 withSeparator:(id)arg2;
- (id)flattenWithSeparator:(id)arg1;

@end
