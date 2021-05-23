/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <CarPlay/Swift-Protocol.h>

@class NSUUID;

@protocol CPControl <Swift>

@property (retain, nonatomic) NSUUID *identifier;

- (unsigned short)handlePrimaryAction;

@end
