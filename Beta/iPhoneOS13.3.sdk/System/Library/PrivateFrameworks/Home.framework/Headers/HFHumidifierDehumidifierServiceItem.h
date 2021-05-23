/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFServiceItem.h>

@interface HFHumidifierDehumidifierServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)createControlItems;
- (void)_formatDescription:(out id *)arg1 controlDescription:(out id *)arg2 optionalDescriptions:(out id *)arg3 forResponse:(id)arg4;

@end
