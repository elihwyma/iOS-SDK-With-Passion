/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSArray, NSDictionary, NSNumber;

@interface EDAMBusinessQueryResult : FATObject

{
    NSNumber *_totalNotebooks;
    NSDictionary *_totalNotesByNotebook;
    NSArray *_experts;
    NSArray *_matchingNotebooks;
}

@property (retain, nonatomic) NSNumber *totalNotebooks;
@property (retain, nonatomic) NSDictionary *totalNotesByNotebook;
@property (retain, nonatomic) NSArray *experts;
@property (retain, nonatomic) NSArray *matchingNotebooks;

+ (id)structName;
+ (id)structFields;

@end
