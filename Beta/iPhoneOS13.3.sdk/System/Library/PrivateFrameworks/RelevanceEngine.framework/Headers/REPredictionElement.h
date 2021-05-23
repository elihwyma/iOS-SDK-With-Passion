/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface REPredictionElement : NSObject

{
    NSString *_identifier;
    unsigned long long _privacyBehavior;
    NSArray *_relevanceProviders;
    NSString *_bundleIdentifier;
    NSString *_interaction;
    NSString *_section;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long privacyBehavior;
@property (nonatomic, readonly) NSArray *relevanceProviders;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *interaction;
@property (retain, nonatomic) NSString *section;

+ (_Bool)supportsSecureCoding;
+ (id)predictionElementFromElement:(id)arg1;
+ (id)predictionElementWithIdentifier:(id)arg1 relevanceProviders:(id)arg2 bundleIdentifier:(id)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
