/*
 Image: /System/Library/PrivateFrameworks/NLP.framework/NLP
 */

#import <Foundation/NSObject.h>

@class NLPOIEntryImpl, NSString;

__attribute__((visibility("hidden")))
@interface NLPOIEntry : NSObject

{
    NLPOIEntryImpl *m_impl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned char category;
@property (nonatomic, readonly) float score;

- (void)dealloc;
- (id)initWithProtoBuf:(id)arg1;

@end
