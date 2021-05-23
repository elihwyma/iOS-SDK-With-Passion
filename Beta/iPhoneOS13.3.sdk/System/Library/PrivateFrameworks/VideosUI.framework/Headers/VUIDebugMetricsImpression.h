/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsImpression : NSObject

{
    NSArray *_orderedOtherKeys;
    NSDictionary *_mainValues;
    NSDictionary *_otherValues;
}

@property (retain, nonatomic) NSDictionary *mainValues;
@property (retain, nonatomic) NSDictionary *otherValues;
@property (retain, nonatomic) NSArray *orderedOtherKeys;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *idType;
@property (nonatomic, readonly) NSString *impressionId;
@property (nonatomic, readonly) NSString *impressionIndex;
@property (nonatomic, readonly) NSString *parentId;

- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
