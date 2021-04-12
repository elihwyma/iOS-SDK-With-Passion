//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class INSetMessageAttributeIntent;

@protocol INSetMessageAttributeIntentHandling <NSObject>
- (void)handleSetMessageAttribute:(INSetMessageAttributeIntent *)arg1 completion:(void (^)(INSetMessageAttributeIntentResponse *))arg2;

@optional
- (void)resolveAttributeForSetMessageAttribute:(INSetMessageAttributeIntent *)arg1 withCompletion:(void (^)(INMessageAttributeResolutionResult *))arg2;
- (void)confirmSetMessageAttribute:(INSetMessageAttributeIntent *)arg1 completion:(void (^)(INSetMessageAttributeIntentResponse *))arg2;
@end

