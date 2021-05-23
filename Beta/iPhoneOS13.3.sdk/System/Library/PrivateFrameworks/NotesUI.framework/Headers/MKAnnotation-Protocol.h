/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/Swift-Protocol.h>

@class NSString;

@protocol MKAnnotation <Swift>

@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;

@end
