/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSArray, NSNumber, NSString;

@interface EDAMRelatedResult : FATObject

{
    NSArray *_notes;
    NSArray *_notebooks;
    NSArray *_tags;
    NSArray *_containingNotebooks;
    NSString *_debugInfo;
    NSArray *_experts;
    NSArray *_relatedContent;
    NSString *_cacheKey;
    NSNumber *_cacheExpires;
}

@property (retain, nonatomic) NSArray *notes;
@property (retain, nonatomic) NSArray *notebooks;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSArray *containingNotebooks;
@property (retain, nonatomic) NSString *debugInfo;
@property (retain, nonatomic) NSArray *experts;
@property (retain, nonatomic) NSArray *relatedContent;
@property (retain, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSNumber *cacheExpires;

+ (id)structName;
+ (id)structFields;

@end
