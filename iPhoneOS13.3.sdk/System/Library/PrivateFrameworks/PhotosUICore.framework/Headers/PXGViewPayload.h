//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol PXGViewUserData;

@interface PXGViewPayload : NSObject <NSCopying>
{
    Class _viewClass;
    id <PXGViewUserData> _userData;
}

@property(readonly, copy, nonatomic) id <PXGViewUserData> userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) Class viewClass; // @synthesize viewClass=_viewClass;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithViewClass:(Class)arg1 userData:(id)arg2;

@end

