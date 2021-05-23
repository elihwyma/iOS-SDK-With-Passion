/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IDSBagFailMetric : NSObject

{
    unsigned long long _sosDomain;
    unsigned long long _sosType;
    unsigned long long _sosError;
    NSString *_operationID;
}

@property (nonatomic) unsigned long long sosDomain;
@property (nonatomic) unsigned long long sosType;
@property (nonatomic) unsigned long long sosError;
@property (retain, nonatomic) NSString *operationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *name;

+ (id)metricWithDomain:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(unsigned long long)arg3 bagURL:(id)arg4;

- (id)initWithDomain:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(unsigned long long)arg3 bagURL:(id)arg4;

@end
