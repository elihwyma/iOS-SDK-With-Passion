//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface CLCppContainer : NSObject <NSSecureCoding>
{
    const void _cppObjectPtr;
    id /* CDUnknownBlockType */ _destructor;
}

+ (BOOL)supportsSecureCoding;
+ (id)containerWithObject:(void )arg1 destructor:(id /* CDUnknownBlockType */)arg2;
@property(copy, nonatomic) id /* CDUnknownBlockType */ destructor; // @synthesize destructor=_destructor;
@property(nonatomic) const void cppObjectPtr; // @synthesize cppObjectPtr=_cppObjectPtr;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithObject:(void )arg1 destructor:(id /* CDUnknownBlockType */)arg2;

@end

