/*
 Image: /System/Library/PrivateFrameworks/ParsecModel.framework/ParsecModel
 */

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface PARImagesSession : NSManagedObject

@property (nonatomic) short other;
@property (nonatomic) short recentResult;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) short zkw;
@property (nonatomic) short image;
@property (nonatomic) short querySuggestion;

+ (id)fetchRequest;

@end
