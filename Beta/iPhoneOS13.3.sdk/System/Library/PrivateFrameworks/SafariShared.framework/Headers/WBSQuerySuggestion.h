/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSQuerySuggestion : NSObject

{
    NSString *_title;
    NSString *_identifier;
    long long _type;
    id _tag;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) id tag;

- (id)init;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 type:(long long)arg3 tag:(id)arg4;

@end
