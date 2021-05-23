/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface TPSEventProviderResult : NSObject

{
    NSString *_identifier;
    NSDictionary *_observationMap;
    NSDate *_resultDate;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *observationMap;
@property (retain, nonatomic) NSDate *resultDate;

- (id)debugDescription;

@end
