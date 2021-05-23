/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol NUSizer;

@interface NULayoutContextSizer : NSObject

{
    id <NUSizer> _sizer;
    NSArray *_attributes;
}

@property (retain, nonatomic) id <NUSizer> sizer;
@property (nonatomic, readonly) NSArray *attributes;

- (id)description;
- (_Bool)matchForLayoutContext:(id)arg1;
- (id)initWithSizer:(id)arg1 attributes:(id)arg2;

@end
