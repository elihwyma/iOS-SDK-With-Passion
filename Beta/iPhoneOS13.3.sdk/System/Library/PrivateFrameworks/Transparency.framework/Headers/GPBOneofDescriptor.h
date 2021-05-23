/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GPBOneofDescriptor : NSObject

{
    const char *name_;
    NSArray *fields_;
    SEL caseSel_;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *fields;

- (void)dealloc;
- (id)initWithName:(const char *)arg1 fields:(id)arg2;
- (id)fieldWithNumber:(unsigned int)arg1;
- (id)fieldWithName:(id)arg1;

@end
