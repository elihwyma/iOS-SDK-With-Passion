/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@interface SXComponentLayoutRules : NSObject <Swift>

{
    _Bool _allowsIntersection;
    _Bool _shouldSpanAllColumns;
    _Bool _allowsSiblingBasedResizing;
    _Bool _shouldIgnoreDocumentMargin;
    unsigned long long _minimumColumnSpan;
}

@property (nonatomic) unsigned long long minimumColumnSpan;
@property (nonatomic) _Bool allowsIntersection;
@property (nonatomic) _Bool shouldSpanAllColumns;
@property (nonatomic) _Bool allowsSiblingBasedResizing;
@property (nonatomic) _Bool shouldIgnoreDocumentMargin;

+ (id)twoColumnLayoutRules;
+ (id)fullWidthLayoutRules;
+ (id)bodyComponentLayoutRules;
+ (id)defaultLayoutRules;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
