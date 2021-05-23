/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, _CDContact;

@interface _CDSuggestedPerson : NSObject

{
    _CDContact *_contact;
    NSString *_interactionBundleID;
    double _rank;
    double _score;
    NSArray *_interactions;
}

@property (retain) NSString *interactionBundleID;
@property double rank;
@property double score;
@property (retain) NSArray *interactions;
@property (retain) _CDContact *contact;

- (id)description;

@end
