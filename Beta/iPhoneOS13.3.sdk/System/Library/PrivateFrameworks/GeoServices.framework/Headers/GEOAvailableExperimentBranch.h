/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface GEOAvailableExperimentBranch : NSObject

{
    NSString *_label;
    NSString *_name;
    NSString *_experimentIdentifier;
    NSMutableArray *_assignments;
    NSArray *_clientConfig;
}

@property (retain, nonatomic, getter=_clientConfig, setter=_setClientConfig:) NSArray *clientConfig;
@property (nonatomic, readonly, getter=_dictionaryRepresentation) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *clientConfigValues;
@property (nonatomic, readonly, getter=isActive) _Bool active;

- (id)description;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)initWithLabel:(id)arg1 name:(id)arg2 experimentIdentifier:(id)arg3;
- (void)_addAssignment:(id)arg1;
- (id)querySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2;

@end
