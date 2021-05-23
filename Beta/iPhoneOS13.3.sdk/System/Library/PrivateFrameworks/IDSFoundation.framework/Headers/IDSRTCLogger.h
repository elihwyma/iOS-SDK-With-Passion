/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IDSRTCLogger : NSObject

{
    unsigned short _category;
}

@property (nonatomic, readonly) unsigned short category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loggerWithCategory:(unsigned short)arg1;

- (void)logMetric:(id)arg1;
- (id)initWithCategory:(unsigned short)arg1;

@end
