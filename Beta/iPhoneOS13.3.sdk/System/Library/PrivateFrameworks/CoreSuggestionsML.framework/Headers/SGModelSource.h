/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class PMLSessionDescriptor;

@interface SGModelSource : NSObject

{
    PMLSessionDescriptor *_sessionDescriptor;
    Class _modelClass;
}

@property (retain, nonatomic) PMLSessionDescriptor *sessionDescriptor;
@property (retain, nonatomic) Class modelClass;

- (id)initWithSessionDescriptor:(id)arg1 modelClass:(Class)arg2;

@end
