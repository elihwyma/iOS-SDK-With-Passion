/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class ISColor, NSArray, NSMutableArray, NSString;

@protocol ISCompositorResource, ISEffect;

__attribute__((visibility("hidden")))
@interface ISLayer : NSObject

{
    ISColor *_backgroundColor;
    NSString *_name;
    id <ISEffect> _effect;
    id <ISCompositorResource> _content;
    ISLayer *_mask;
    ISLayer *_internalSuperlayer;
    NSMutableArray *_internalSublayers;
    struct CGRect _frame;
}

@property (weak, nonatomic) ISLayer *internalSuperlayer;
@property (nonatomic, readonly) NSMutableArray *internalSublayers;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct CGPoint position;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) id <ISEffect> effect;
@property (retain, nonatomic) ISColor *backgroundColor;
@property (retain, nonatomic) id <ISCompositorResource> content;
@property (retain, nonatomic) ISLayer *mask;
@property (nonatomic, readonly) ISLayer *superlayer;
@property (copy, nonatomic, readonly) NSArray *sublayers;

- (id)init;
- (id)debugDescription;
- (void)removeFromSuperlayer;
- (void)addSublayer:(id)arg1;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;

@end
