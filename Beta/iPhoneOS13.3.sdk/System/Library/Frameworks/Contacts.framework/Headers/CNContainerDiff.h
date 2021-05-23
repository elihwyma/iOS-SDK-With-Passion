/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNContainerDiff : NSObject

{
    NSArray *_updates;
}

@property (retain, nonatomic) NSArray *updates;

+ (id)diffContainer:(id)arg1 to:(id)arg2;

- (id)description;
- (id)initWithUpdates:(id)arg1;

@end
