/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface LKAUpgradeOutcomeReport : NSObject

{
    int _outcome;
    NSDictionary *_attributes;
}

@property int outcome;
@property (retain) NSDictionary *attributes;

- (id)initWithOutcome:(int)arg1 attributes:(id)arg2;

@end
