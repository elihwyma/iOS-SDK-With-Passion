//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFServiceItem.h>

@interface HFHumidifierDehumidifierServiceItem : HFServiceItem
{
}

+ (id)supportedServiceTypes;
- (void)_formatDescription:(out id )arg1 controlDescription:(out id )arg2 optionalDescriptions:(out id )arg3 forResponse:(id)arg4;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)createControlItems;

@end

