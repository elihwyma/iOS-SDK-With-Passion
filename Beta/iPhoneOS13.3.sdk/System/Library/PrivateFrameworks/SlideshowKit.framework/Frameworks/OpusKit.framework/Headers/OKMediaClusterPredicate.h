/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface OKMediaClusterPredicate : NSObject

{
    NSString *_uniqueID;
    unsigned long long _category;
}

@property (copy, nonatomic) NSString *uniqueID;
@property (nonatomic) unsigned long long category;

+ (id)nameForCategory:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)title;
- (id)evaluateItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (float)efficiencyForItems:(id)arg1;

@end
