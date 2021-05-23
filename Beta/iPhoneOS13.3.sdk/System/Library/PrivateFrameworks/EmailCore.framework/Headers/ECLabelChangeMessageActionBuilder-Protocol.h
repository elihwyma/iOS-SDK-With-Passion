/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/Swift-Protocol.h>

@class NSArray, NSSet;

@protocol ECLabelChangeMessageActionBuilder <Swift>

@property (copy, nonatomic) NSSet *remoteIDs;
@property (copy, nonatomic) NSArray *messages;
@property (copy, nonatomic) NSSet *labelsToAdd;
@property (copy, nonatomic) NSSet *labelsToRemove;

@end
