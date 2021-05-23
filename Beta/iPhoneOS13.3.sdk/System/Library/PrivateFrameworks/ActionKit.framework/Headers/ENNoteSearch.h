/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ENNoteSearch : NSObject

{
    NSString *_searchString;
}

@property (retain, nonatomic) NSString *searchString;

+ (id)noteSearchWithSearchString:(id)arg1;
+ (id)noteSearchCreatedByThisApplication;

- (id)init;
- (id)initWithSearchString:(id)arg1;

@end
