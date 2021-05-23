/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString, PHPerson;

@interface PGNamingQuestion : NSObject

{
    PHPerson *_person;
    long long _type;
    double _score;
    NSString *_contactIdentifier;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double score;

+ (id)questionForPerson:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)remove;
- (void)persist;
- (_Bool)isEqualToQuestion:(id)arg1;
- (id)initWithPerson:(id)arg1 contactIdentifier:(id)arg2 score:(double)arg3;
- (id)_personForContactSuggestion;

@end
