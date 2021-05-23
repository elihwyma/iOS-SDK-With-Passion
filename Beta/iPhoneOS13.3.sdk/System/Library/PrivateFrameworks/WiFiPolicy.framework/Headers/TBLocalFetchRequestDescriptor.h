/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSFetchRequest;

@interface TBLocalFetchRequestDescriptor : NSObject

{
    NSFetchRequest *_fetchRequest;
    NSFetchRequest *_localFetchRequest;
}

@property (retain, nonatomic) NSFetchRequest *localFetchRequest;
@property (nonatomic, readonly) NSFetchRequest *fetchRequest;

- (id)initWithFetchRequest:(id)arg1;

@end
