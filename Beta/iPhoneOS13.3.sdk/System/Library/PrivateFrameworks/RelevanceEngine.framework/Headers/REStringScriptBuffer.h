/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface REStringScriptBuffer : NSObject

{
    NSString *_string;
    unsigned long long _index;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) unsigned short current;

- (id)initWithString:(id)arg1;
- (void)next;
- (id)contentForLine:(unsigned long long)arg1;

@end
