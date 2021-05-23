/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

#import <TSReading/Swift-Protocol.h>

@class TSWPStorage;

@interface TSTRichTextPayload : TSPObject <Swift>

{
    TSWPStorage *mStorage;
}

@property (retain, nonatomic) TSWPStorage *storage;

- (id)string;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 storage:(id)arg2;
- (_Bool)requiresRichText;

@end
