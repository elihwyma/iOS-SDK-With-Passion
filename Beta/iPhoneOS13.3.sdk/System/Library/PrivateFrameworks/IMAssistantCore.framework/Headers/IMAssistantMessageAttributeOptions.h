/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <Foundation/NSObject.h>

@interface IMAssistantMessageAttributeOptions : NSObject

{
    unsigned long long _attributes;
}

@property (nonatomic, readonly) _Bool includeRead;
@property (nonatomic, readonly) _Bool includeUnread;
@property (nonatomic, readonly) unsigned long long attributes;

+ (id)optionsWithAttributes:(unsigned long long)arg1;
+ (id)optionsWithAttributes:(unsigned long long)arg1 sanitizer:(id)arg2;

- (id)initWithAttributes:(unsigned long long)arg1;
- (id)initWithAttributes:(unsigned long long)arg1 sanitizer:(id)arg2;

@end
