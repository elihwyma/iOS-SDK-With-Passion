/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@protocol MSPMutableObject <Swift>

+ (unsigned short)immutableObjectClass;
+ (unsigned short)immutableObjectProtocol;

- (unsigned short)mutableCopy;

@end
