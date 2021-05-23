/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class _LSDatabase;

__attribute__((visibility("hidden")))
@interface _LSBindingForLog : NSObject

{
    _LSDatabase *_db;
    struct LSBinding _binding;
}

- (id)description;
- (id)redactedDescription;
- (id).cxx_construct;
- (id)initWithState:(const struct State *)arg1 binding:(const struct ExtendedBinding *)arg2;

@end
