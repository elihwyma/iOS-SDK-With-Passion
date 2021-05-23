/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSPasswordWordList : NSObject

{
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSString *identifier;

- (id)initWithIdentifier:(id)arg1;
- (void)enumerateEntriesForString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)entriesForString:(id)arg1;

@end
