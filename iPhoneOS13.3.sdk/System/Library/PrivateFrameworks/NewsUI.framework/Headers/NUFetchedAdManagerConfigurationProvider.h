//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdManagerConfigurationProvider-Protocol.h>

@protocol NUAdManagerConfiguration;

@interface NUFetchedAdManagerConfigurationProvider : NSObject <NUAdManagerConfigurationProvider>
{
    NSObject<NUAdManagerConfiguration> *_configuration;
}

@property(readonly, copy, nonatomic) NSObject<NUAdManagerConfiguration> *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (void)fetchConfigurationWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

