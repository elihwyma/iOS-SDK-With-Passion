/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface _PLDeferredLogFormattedEntry : NSObject

{
    long long _context;
    NSString *_logType;
    NSString *_entityDescription;
    NSDate *_date;
    unsigned long long _objectPointer;
}

@property (nonatomic) long long context;
@property (retain, nonatomic) NSString *logType;
@property (retain, nonatomic) NSString *entityDescription;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long objectPointer;

@end
