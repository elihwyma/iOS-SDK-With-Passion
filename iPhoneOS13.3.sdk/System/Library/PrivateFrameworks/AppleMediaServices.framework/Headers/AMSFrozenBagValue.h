//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSBagValue.h>

@protocol AMSBagDataSourceProtocol;

__attribute__((visibility("hidden")))
@interface AMSFrozenBagValue : AMSBagValue
{
    id <AMSBagDataSourceProtocol> _dataSource;
}

@property(retain, nonatomic) id <AMSBagDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (id)initWithKey:(id)arg1 value:(id)arg2 valueType:(NSUInteger)arg3;

@end

