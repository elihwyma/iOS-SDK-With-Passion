//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXJSONObjectMergerClassProviding-Protocol.h>

@interface SXJSONObjectMergerClassProvider : NSObject <SXJSONObjectMergerClassProviding>
{
    Class _objectClass;
}

@property(readonly, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
// - (void).cxx_destruct;
- (Class)classForObject:(id)arg1 specVersion:(id)arg2;
- (id)initWithObjectClass:(Class)arg1;

@end

