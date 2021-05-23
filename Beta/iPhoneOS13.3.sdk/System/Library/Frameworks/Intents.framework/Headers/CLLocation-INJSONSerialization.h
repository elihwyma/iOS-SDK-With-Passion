/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <CoreLocation/CLLocation.h>

@class NSString;

@interface CLLocation (INJSONSerialization)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;

@end
